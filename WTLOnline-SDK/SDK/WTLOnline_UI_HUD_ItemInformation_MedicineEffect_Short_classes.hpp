#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_HUD_ItemInformation_MedicineEffect_Short_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_HUD_ItemInformation_MedicineEffect_Short.UI_HUD_ItemInformation_MedicineEffect_Short_C
// 0x0000 (0x0228 - 0x0228)
class UUI_HUD_ItemInformation_MedicineEffect_Short_C : public UWTLHUDItemInformationMedicineEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass UI_HUD_ItemInformation_MedicineEffect_Short.UI_HUD_ItemInformation_MedicineEffect_Short_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
