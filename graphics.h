
// 生成图形窗口。
void drawGraphicWindow() {
	initgraph(graphicWindowWidth, graphicWindowHeight);
}

// 生成图形窗口的背景图像。背景图像：宇宙中的星空
void drawStarrySky(int numberOfStarsToDraw) {
	// 用深蓝色做为背景。RGB(28, 32, 163) or RGB(2, 25, 63)
	setbkcolor(RGB(2, 25, 63));
	// setbkcolor(BLACK);
	cleardevice();

	// 在图形窗口上的随机位置生成随机大小的白色填充的圆形来做星星。
	setfillcolor(WHITE);
	seadRandomNumberGenerator();
	for (short C = 0; C <= numberOfStarsToDraw; C++) {
		fillcircle(getRandomIntegerInRange(0, graphicWindowWidth), getRandomIntegerInRange(0, graphicWindowHeight), getRandomIntegerInRange(1, 3));
	}
}

// 在指定位置使用RGB色彩通道显示图像。这个方程不使用Alpha通道，所以无法正常显示透明像素。
void drawImageAsRGB(IMAGE *sourceImage, short imagePositionX,short imagePositionY) {
	putimage(imagePositionX, imagePositionY, sourceImage);
}

// 使用RGBA色彩通道在指定位置显示图像。
void drawImageAsRGBA(IMAGE* sourceImage, double imagePositionX, double imagePositionY) {
	// 获取原图的尺寸。
	int sourceImageWidth = sourceImage->getwidth();
	int sourceImageHeight = sourceImage->getheight();

	// 截取原图将要覆盖的区域的图像。
	IMAGE areaToCover;
	getimage(&areaToCover, (int) imagePositionX, (int) imagePositionY, sourceImageWidth, sourceImageHeight);

	// 获取原图和原图将要覆盖的区域的图像的缓冲区数组指针。
	DWORD *sourceImagePixel = GetImageBuffer(sourceImage);
	DWORD *areaToCoverPixel = GetImageBuffer(&areaToCover);

	// 把原图像素与原图将要覆盖的区域的图像对应的像素进行透明度叠加。
	for (int sourceImageLocalAxisY = 0; sourceImageLocalAxisY < sourceImageHeight; sourceImageLocalAxisY++) {
		for (int sourceImageLocalAxisX = 0; sourceImageLocalAxisX < sourceImageWidth; sourceImageLocalAxisX++) {
			// 获取原图的像素的每个色彩通道的值。
			double sourceImageRedChannel = (UCHAR)(sourceImagePixel[sourceImageWidth * sourceImageLocalAxisY + sourceImageLocalAxisX] >> 0);
			double sourceImageGreenChannel = (UCHAR)(sourceImagePixel[sourceImageWidth * sourceImageLocalAxisY + sourceImageLocalAxisX] >> 8);
			double sourceImageBlueChannel = (UCHAR)(sourceImagePixel[sourceImageWidth * sourceImageLocalAxisY + sourceImageLocalAxisX] >> 16);
			double sourceImageAlphaChannel = (UCHAR)(sourceImagePixel[sourceImageWidth * sourceImageLocalAxisY + sourceImageLocalAxisX] >> 24);

			// 获取原图将要覆盖的区域的像素的每个色彩通道的值。
			double areaToCoverRedChannel = (UCHAR)(areaToCoverPixel[sourceImageWidth * sourceImageLocalAxisY + sourceImageLocalAxisX] >> 0);
			double areaToCoverGreenChannel = (UCHAR)(areaToCoverPixel[sourceImageWidth * sourceImageLocalAxisY + sourceImageLocalAxisX] >> 8);
			double areaToCoverBlueChannel = (UCHAR)(areaToCoverPixel[sourceImageWidth * sourceImageLocalAxisY + sourceImageLocalAxisX] >> 16);
			double areaToCoverAlphaChannel = (UCHAR)(areaToCoverPixel[sourceImageWidth * sourceImageLocalAxisY + sourceImageLocalAxisX] >> 24);

			// 调试时用于确认程序有获取到原图将要覆盖的区域的像素的颜色。
			/*
			if (sourceImageLocalAxisY == 0 and sourceImageLocalAxisY == 0) {
				setbkcolor(GREEN);
				cleardevice();
			}
			*/

			// 通过算法使用原图的Alpha通道的值为系数混合原图的彩色像素的每个色彩通道的值和当前图形窗口对应原图像素的像素的每个色彩通道的值。0.00392156862 = 1 / 255
			double destinateImageRedChannel = areaToCoverRedChannel + (sourceImageAlphaChannel / 255) * (sourceImageRedChannel - areaToCoverRedChannel);
			double destinateImageGreenChannel = areaToCoverGreenChannel + (sourceImageAlphaChannel / 255) * (sourceImageGreenChannel - areaToCoverGreenChannel);
			double destinateImageBlueChannel = areaToCoverBlueChannel + (sourceImageAlphaChannel / 255) * (sourceImageBlueChannel - areaToCoverBlueChannel);

			// UCHAR destinateImageRedChannel = sourceImageRedChannel * (sourceImageAlphaChannel * 0.00392156862) + (1 - sourceImageAlphaChannel / 255) * areaToCoverRedChannel;
			// UCHAR destinateImageGreenChannel = sourceImageGreenChannel * (sourceImageAlphaChannel * 0.00392156862) + (1 - sourceImageAlphaChannel / 255) * areaToCoverGreenChannel;
			// UCHAR destinateImageBlueChannel = sourceImageBlueChannel * (sourceImageAlphaChannel * 0.00392156862) + (1 - sourceImageAlphaChannel / 255) * areaToCoverBlueChannel;

			// 显示生成的图像。这个图像不是真正的RGBA图像，而是RGB图像，它只是以原图的Alpha通道的值为系数混合原图像素和背景像素来模拟RGBA图像的效果。
			putpixel((int) imagePositionX + sourceImageLocalAxisX, (int) imagePositionY + sourceImageLocalAxisY, RGB(destinateImageBlueChannel, destinateImageGreenChannel, destinateImageRedChannel));
		}
	}
}

// 将图像以灰阶图像加载到指定指针并在指定位置显示图像。
void loadAndDrawImageAsBlackWhiteGradient(IMAGE *sourceImage, IMAGE *destinateImage, short imagePositionX, short imagePositionY) {
	// 设定灰阶图像到与原图相同的尺寸。单位：像素
	destinateImage -> Resize(sourceImage -> getwidth(), sourceImage -> getheight());

	// 获取原图和灰阶图像的缓冲区数组指针。
	DWORD *sourceImagePixel = GetImageBuffer(sourceImage);
	DWORD *destinateImagePixel = GetImageBuffer(destinateImage);

	// 将每个数组指针的彩色像素转换成灰阶像素。
	for (int C = 0; C < sourceImage -> getwidth() * sourceImage -> getheight(); C++) {
		// 获取原图的彩色像素的颜色。
		DWORD sourceImagePixelColor = sourceImagePixel[C];

		// 获取原图的彩色像素的每个色彩通道的值。
		UCHAR redChannel = (UCHAR) (sourceImagePixelColor >> 0);
		UCHAR greenChannel = (UCHAR) (sourceImagePixelColor >> 8);
		UCHAR blueChannel = (UCHAR) (sourceImagePixelColor >> 16);
		UCHAR alphaChannel = (UCHAR) (sourceImagePixelColor >> 24);

		// 取所有色彩通道的值的平均值。可以不包括Alpha通道的值，包括Alpha通道的值会使生成的灰阶图像更白。
		UCHAR destinateImagePixelColorChannelValue = (redChannel + greenChannel + blueChannel) / 3;
		destinateImagePixel[C] = RGB(destinateImagePixelColorChannelValue, destinateImagePixelColorChannelValue, destinateImagePixelColorChannelValue);
	}

	// 显示生成的灰阶图像。
	putimage(imagePositionX, imagePositionY, destinateImage);
}

// 使用背景图像覆盖整个图形窗口，可以用来刷新画面。
IMAGE background;
void getAndSaveBackground() {
	getimage(&background, 0, 0, graphicWindowWidth, graphicWindowHeight);
}
void redrawBackground() {
	putimage(0, 0, &background);
}