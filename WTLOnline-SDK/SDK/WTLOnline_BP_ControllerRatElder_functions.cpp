// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_ControllerRatElder_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ControllerRatElder.BP_ControllerRatElder_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ControllerRatElder_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ControllerRatElder.BP_ControllerRatElder_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ControllerRatElder.BP_ControllerRatElder_C.BndEvt__AIPerception_0_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FAIStimulus             Stimulus                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_ControllerRatElder_C::BndEvt__AIPerception_0_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ControllerRatElder.BP_ControllerRatElder_C.BndEvt__AIPerception_0_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature"));

	struct
	{
		class AActor*                  Actor;
		struct FAIStimulus             Stimulus;
	} params;

	params.Actor = Actor;
	params.Stimulus = Stimulus;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ControllerRatElder.BP_ControllerRatElder_C.ExecuteUbergraph_BP_ControllerRatElder
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_ControllerRatElder_C::ExecuteUbergraph_BP_ControllerRatElder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ControllerRatElder.BP_ControllerRatElder_C.ExecuteUbergraph_BP_ControllerRatElder"));

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
