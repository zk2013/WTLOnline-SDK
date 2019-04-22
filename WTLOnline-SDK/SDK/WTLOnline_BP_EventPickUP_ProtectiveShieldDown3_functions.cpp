// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_EventPickUP_ProtectiveShieldDown3_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_EventPickUP_ProtectiveShieldDown3.BP_EventPickUP_ProtectiveShieldDown3_C.BPCanBeUsed
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ABP_EventPickUP_ProtectiveShieldDown3_C::BPCanBeUsed(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPickUP_ProtectiveShieldDown3.BP_EventPickUP_ProtectiveShieldDown3_C.BPCanBeUsed"));

	struct
	{
		class AWTLCharacter*           Character;
		bool                           ReturnValue;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_EventPickUP_ProtectiveShieldDown3.BP_EventPickUP_ProtectiveShieldDown3_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_EventPickUP_ProtectiveShieldDown3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPickUP_ProtectiveShieldDown3.BP_EventPickUP_ProtectiveShieldDown3_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_EventPickUP_ProtectiveShieldDown3.BP_EventPickUP_ProtectiveShieldDown3_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_EventPickUP_ProtectiveShieldDown3_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPickUP_ProtectiveShieldDown3.BP_EventPickUP_ProtectiveShieldDown3_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_EventPickUP_ProtectiveShieldDown3.BP_EventPickUP_ProtectiveShieldDown3_C.BPOnTakeItem
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_EventPickUP_ProtectiveShieldDown3_C::BPOnTakeItem(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPickUP_ProtectiveShieldDown3.BP_EventPickUP_ProtectiveShieldDown3_C.BPOnTakeItem"));

	struct
	{
		class AWTLCharacter*           Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_EventPickUP_ProtectiveShieldDown3.BP_EventPickUP_ProtectiveShieldDown3_C.BPUse
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_EventPickUP_ProtectiveShieldDown3_C::BPUse(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPickUP_ProtectiveShieldDown3.BP_EventPickUP_ProtectiveShieldDown3_C.BPUse"));

	struct
	{
		class AWTLCharacter*           Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_EventPickUP_ProtectiveShieldDown3.BP_EventPickUP_ProtectiveShieldDown3_C.SetMesh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMesh*             Mesh                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_EventPickUP_ProtectiveShieldDown3_C::SetMesh(class UStaticMesh* Mesh)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPickUP_ProtectiveShieldDown3.BP_EventPickUP_ProtectiveShieldDown3_C.SetMesh"));

	struct
	{
		class UStaticMesh*             Mesh;
	} params;

	params.Mesh = Mesh;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_EventPickUP_ProtectiveShieldDown3.BP_EventPickUP_ProtectiveShieldDown3_C.ExecuteUbergraph_BP_EventPickUP_ProtectiveShieldDown3
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_EventPickUP_ProtectiveShieldDown3_C::ExecuteUbergraph_BP_EventPickUP_ProtectiveShieldDown3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPickUP_ProtectiveShieldDown3.BP_EventPickUP_ProtectiveShieldDown3_C.ExecuteUbergraph_BP_EventPickUP_ProtectiveShieldDown3"));

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