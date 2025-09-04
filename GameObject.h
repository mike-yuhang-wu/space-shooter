
class GameObject {

	short animationFrameX;						 // 
	short animationFrameMaxX;
	short animationFrameMinX;
	short animationFrameY;						 // 
	short animationFrameMaxY;
	short animationFrameMinY;

	short maxHitPoint;							 // ??????
	short remainingHitPoint;					 // ??????

	short animationFrameWidth;					 // 动画帧的宽度。单位：像素
	short animationFrameHeight;					 // 动画帧的高度。单位：像素

	double positionX;							 // 图形窗口上的x坐标。原点：图形窗口左上角	单位：像素	
	double positionY;							 // 图形窗口上的y坐标。原点：图形窗口左上角	单位：像素

	double inertiaX;							 // 左右惯性。
	double inertiaY;							 // 前后惯性。
};

