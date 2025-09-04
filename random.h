
// 
void seadRandomNumberGenerator() {
	srand((long)time(nullptr));
}

// 
int getRandomIntegerInRange(int minimalNumber, int maximalNumber) {
	int randomNumber = (rand() % (maximalNumber - minimalNumber + 1)) + minimalNumber;
	return randomNumber;
}