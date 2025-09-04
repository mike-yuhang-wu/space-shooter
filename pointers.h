
IMAGE colorTest;								 // 
IMAGE colorTestForBlackWhiteImage;				 // 

IMAGE legendaryHeroFighterJet[7][11][1][1];		 // 
IMAGE spiritStealthJet[5];						 // 
IMAGE gunnerBomberJet;							 // 
IMAGE kamikaze;									 // 

IMAGE HEAT_Cartridge;
IMAGE HEAT_Warhead;

void loadImageToPointers() {
	// loadimage(&colorTest, "./Space Shooter Resource/Color Testing Image/Space_Shooter_Testing_Image.png");

	loadimage(&legendaryHeroFighterJet[0][0][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 0_0_0_0.png");
	loadimage(&legendaryHeroFighterJet[0][1][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 0_1_0_0.png");
	loadimage(&legendaryHeroFighterJet[0][2][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 0_2_0_0.png");
	loadimage(&legendaryHeroFighterJet[0][3][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 0_3_0_0.png");
	loadimage(&legendaryHeroFighterJet[0][4][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 0_4_0_0.png");
	loadimage(&legendaryHeroFighterJet[0][5][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 0_5_0_0.png");
	loadimage(&legendaryHeroFighterJet[0][6][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 0_6_0_0.png");
	loadimage(&legendaryHeroFighterJet[0][7][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 0_7_0_0.png");
	loadimage(&legendaryHeroFighterJet[0][8][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 0_8_0_0.png");
	loadimage(&legendaryHeroFighterJet[0][9][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 0_9_0_0.png");
	loadimage(&legendaryHeroFighterJet[0][10][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 0_10_0_0.png");

	loadimage(&legendaryHeroFighterJet[1][0][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 1_0_0_0.png");
	loadimage(&legendaryHeroFighterJet[1][1][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 1_1_0_0.png");
	loadimage(&legendaryHeroFighterJet[1][2][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 1_2_0_0.png");
	loadimage(&legendaryHeroFighterJet[1][3][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 1_3_0_0.png");
	loadimage(&legendaryHeroFighterJet[1][4][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 1_4_0_0.png");
	loadimage(&legendaryHeroFighterJet[1][5][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 1_5_0_0.png");
	loadimage(&legendaryHeroFighterJet[1][6][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 1_6_0_0.png");
	loadimage(&legendaryHeroFighterJet[1][7][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 1_7_0_0.png");
	loadimage(&legendaryHeroFighterJet[1][8][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 1_8_0_0.png");
	loadimage(&legendaryHeroFighterJet[1][9][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 1_9_0_0.png");
	loadimage(&legendaryHeroFighterJet[1][10][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 1_10_0_0.png");

	loadimage(&legendaryHeroFighterJet[2][0][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 2_0_0_0.png");
	loadimage(&legendaryHeroFighterJet[2][1][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 2_1_0_0.png");
	loadimage(&legendaryHeroFighterJet[2][2][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 2_2_0_0.png");
	loadimage(&legendaryHeroFighterJet[2][3][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 2_3_0_0.png");
	loadimage(&legendaryHeroFighterJet[2][4][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 2_4_0_0.png");
	loadimage(&legendaryHeroFighterJet[2][5][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 2_5_0_0.png");
	loadimage(&legendaryHeroFighterJet[2][6][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 2_6_0_0.png");
	loadimage(&legendaryHeroFighterJet[2][7][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 2_7_0_0.png");
	loadimage(&legendaryHeroFighterJet[2][8][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 2_8_0_0.png");
	loadimage(&legendaryHeroFighterJet[2][9][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 2_9_0_0.png");
	loadimage(&legendaryHeroFighterJet[2][10][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 2_10_0_0.png");

	loadimage(&legendaryHeroFighterJet[3][0][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 3_0_0_0.png");
	loadimage(&legendaryHeroFighterJet[3][1][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 3_1_0_0.png");
	loadimage(&legendaryHeroFighterJet[3][2][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 3_2_0_0.png");
	loadimage(&legendaryHeroFighterJet[3][3][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 3_3_0_0.png");
	loadimage(&legendaryHeroFighterJet[3][4][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 3_4_0_0.png");
	loadimage(&legendaryHeroFighterJet[3][5][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 3_5_0_0.png");
	loadimage(&legendaryHeroFighterJet[3][6][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 3_6_0_0.png");
	loadimage(&legendaryHeroFighterJet[3][7][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 3_7_0_0.png");
	loadimage(&legendaryHeroFighterJet[3][8][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 3_8_0_0.png");
	loadimage(&legendaryHeroFighterJet[3][9][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 3_9_0_0.png");
	loadimage(&legendaryHeroFighterJet[3][10][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 3_10_0_0.png");

	loadimage(&legendaryHeroFighterJet[4][0][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 4_0_0_0.png");
	loadimage(&legendaryHeroFighterJet[4][1][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 4_1_0_0.png");
	loadimage(&legendaryHeroFighterJet[4][2][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 4_2_0_0.png");
	loadimage(&legendaryHeroFighterJet[4][3][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 4_3_0_0.png");
	loadimage(&legendaryHeroFighterJet[4][4][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 4_4_0_0.png");
	loadimage(&legendaryHeroFighterJet[4][5][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 4_5_0_0.png");
	loadimage(&legendaryHeroFighterJet[4][6][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 4_6_0_0.png");
	loadimage(&legendaryHeroFighterJet[4][7][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 4_7_0_0.png");
	loadimage(&legendaryHeroFighterJet[4][8][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 4_8_0_0.png");
	loadimage(&legendaryHeroFighterJet[4][9][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 4_9_0_0.png");
	loadimage(&legendaryHeroFighterJet[4][10][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 4_10_0_0.png");

	loadimage(&legendaryHeroFighterJet[5][0][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 5_0_0_0.png");
	loadimage(&legendaryHeroFighterJet[5][1][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 5_1_0_0.png");
	loadimage(&legendaryHeroFighterJet[5][2][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 5_2_0_0.png");
	loadimage(&legendaryHeroFighterJet[5][3][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 5_3_0_0.png");
	loadimage(&legendaryHeroFighterJet[5][4][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 5_4_0_0.png");
	loadimage(&legendaryHeroFighterJet[5][5][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 5_5_0_0.png");
	loadimage(&legendaryHeroFighterJet[5][6][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 5_6_0_0.png");
	loadimage(&legendaryHeroFighterJet[5][7][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 5_7_0_0.png");
	loadimage(&legendaryHeroFighterJet[5][8][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 5_8_0_0.png");
	loadimage(&legendaryHeroFighterJet[5][9][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 5_9_0_0.png");
	loadimage(&legendaryHeroFighterJet[5][10][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 5_10_0_0.png");

	loadimage(&legendaryHeroFighterJet[6][0][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 6_0_0_0.png");
	loadimage(&legendaryHeroFighterJet[6][1][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 6_1_0_0.png");
	loadimage(&legendaryHeroFighterJet[6][2][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 6_2_0_0.png");
	loadimage(&legendaryHeroFighterJet[6][3][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 6_3_0_0.png");
	loadimage(&legendaryHeroFighterJet[6][4][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 6_4_0_0.png");
	loadimage(&legendaryHeroFighterJet[6][5][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 6_5_0_0.png");
	loadimage(&legendaryHeroFighterJet[6][6][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 6_6_0_0.png");
	loadimage(&legendaryHeroFighterJet[6][7][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 6_7_0_0.png");
	loadimage(&legendaryHeroFighterJet[6][8][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 6_8_0_0.png");
	loadimage(&legendaryHeroFighterJet[6][9][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 6_9_0_0.png");
	loadimage(&legendaryHeroFighterJet[6][10][0][0], "./Space Shooter Resource/Character Image/Hero/Legendary Hero 6_10_0_0.png");


	loadimage(&spiritStealthJet[0], "./Space Shooter Resource/Character Image/Spirit/Spirit 0.png");
	loadimage(&spiritStealthJet[1], "./Space Shooter Resource/Character Image/Spirit/Spirit 1.png");
	loadimage(&spiritStealthJet[2], "./Space Shooter Resource/Character Image/Spirit/Spirit 2.png");
	loadimage(&spiritStealthJet[3], "./Space Shooter Resource/Character Image/Spirit/Spirit 3.png");
	loadimage(&spiritStealthJet[4], "./Space Shooter Resource/Character Image/Spirit/Spirit 4.png");


	loadimage(&HEAT_Cartridge, "./Space Shooter Resource/Object Image/4x375mm HEAT Cartridge.png");
	loadimage(&HEAT_Warhead, "./Space Shooter Resource/Object Image/4x375mm HEAT Warhead.png");
}