
// 初始化角色数据结构体。
struct weapon {
	short animationFrameWidth;					 // 动画帧的宽度。单位：像素
	short animationFrameHeight;					 // 动画帧的高度。单位：像素

	short weaponSlot;							 // 武器所在的武器栏的编号。

	short maxHitPoint;							 // 最大生命值。
	short remainingHitPoint;					 // 剩余生命值。

	double positionX;							 // 图形窗口上的x坐标。原点：图形窗口左上角	单位：像素	
	double positionY;							 // 图形窗口上的y坐标。原点：图形窗口左上角	单位：像素

	double inertiaX;							 // 左右惯性。
	double inertiaY;							 // 前后惯性。

	short minimalRecoil;
	short maximalRecoil;
	
	short damageRangeRadius;					 //	伤害判定范围半径。单位：像素
	short damage;								 // 单发伤害。

	bool isHit;									 // 是否已命中物体？
}

// 初始化角色结构体成员。
heatCartridge[maximumAmmunationLoad_heat],
heat[maximumAmmunationLoad_heat];

// 为角色结构体成员赋值。
void initializeHeatCartridge() {
	heatCartridge[heroHeatFired].animationFrameWidth = 8;
	heatCartridge[heroHeatFired].animationFrameHeight = 16;

	heatCartridge[heroHeatFired].weaponSlot = 0;

	heatCartridge[heroHeatFired].maxHitPoint = 100;
	heatCartridge[heroHeatFired].remainingHitPoint = 100;

	heatCartridge[heroHeatFired].positionX = hero.positionX + 0.5 * (hero.animationFrameWidth - heatCartridge[heroHeatFired].animationFrameWidth) + heroHeatMuzzleDistanceFromCenter * cos((hero.animationFrameX - 5) * piTheCircumferenceToDiameterRatio / 15) * heroHeatMuzzleDisplacement;
	heatCartridge[heroHeatFired].positionY = hero.positionY + 85;

	heatCartridge[heroHeatFired].inertiaX = getRandomIntegerInRange(-2, 2);
	heatCartridge[heroHeatFired].inertiaY = 8;

	heatCartridge[heroHeatFired].damageRangeRadius = 10;
	heatCartridge[heroHeatFired].damage = 200;

	heatCartridge[heroHeatFired].isHit = false;
}

void initializeHeat() {
	heat[heroHeatFired].animationFrameWidth = 8;
	heat[heroHeatFired].animationFrameHeight = 16;

	heat[heroHeatFired].weaponSlot = 0;

	heat[heroHeatFired].maxHitPoint = 200;
	heat[heroHeatFired].remainingHitPoint = 200;

	heat[heroHeatFired].positionX = hero.positionX + 0.5 * (hero.animationFrameWidth - heat[heroHeatFired].animationFrameWidth) + heroHeatMuzzleDistanceFromCenter * cos((hero.animationFrameX - 5) * piTheCircumferenceToDiameterRatio / 15) * heroHeatMuzzleDisplacement;
	heat[heroHeatFired].positionY = hero.positionY + 45;

	heat[heroHeatFired].inertiaX = getRandomIntegerInRange(-1, 1) * 0;
	heat[heroHeatFired].inertiaY = -27;

	heat[heroHeatFired].damageRangeRadius = 10;
	heat[heroHeatFired].damage = 250;

	heat[heroHeatFired].isHit = false;
}