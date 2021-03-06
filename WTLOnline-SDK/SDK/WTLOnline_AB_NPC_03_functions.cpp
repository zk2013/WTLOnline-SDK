// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_AB_NPC_03_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AB_NPC_03.AB_NPC_03_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAB_NPC_03_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_NPC_03.AB_NPC_03_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function AB_NPC_03.AB_NPC_03_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAB_NPC_03_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_NPC_03.AB_NPC_03_C.BlueprintInitializeAnimation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_NPC_03.AB_NPC_03_C.ExecuteUbergraph_AB_NPC_03
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAB_NPC_03_C::ExecuteUbergraph_AB_NPC_03(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_NPC_03.AB_NPC_03_C.ExecuteUbergraph_AB_NPC_03"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
