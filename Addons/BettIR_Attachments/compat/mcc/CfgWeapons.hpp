#include "macros.hpp"

class CfgWeapons {
	class ItemCore;

	// NGAL + M600V: IR Laser variant
	class MCC_AR_NGAL_M600V_BLK_IRL: ItemCore {
		CLEARMRT
		class ItemInfo {
			LASERHI
		};
	};
	// NGAL + M600V: White Light variant
	class MCC_AR_NGAL_M600V_BLK_WL: ItemCore {
		CLEARMRT
	};
};
