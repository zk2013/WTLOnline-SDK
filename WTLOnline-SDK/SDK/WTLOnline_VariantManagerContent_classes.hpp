#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_VariantManagerContent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class VariantManagerContent.LevelVariantSets
// 0x0060 (0x0088 - 0x0028)
class ULevelVariantSets : public UObject
{
public:
	TArray<class UVariantSet*>                         VariantSets;                                              // 0x0028(0x0010) (CPF_ZeroConstructor)
	TMap<class UVariantSet*, bool>                     DisplayNodeExpansionStates;                               // 0x0038(0x0050) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VariantManagerContent.LevelVariantSets"));
		return ptr;
	}


	class UVariantSet* GetVariantSet(int VariantSetIndex);
	int GetNumVariantSets();
};


// Class VariantManagerContent.LevelVariantSetsActor
// 0x0018 (0x0340 - 0x0328)
class ALevelVariantSetsActor : public AActor
{
public:
	struct FSoftObjectPath                             LevelVariantSets;                                         // 0x0328(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VariantManagerContent.LevelVariantSetsActor"));
		return ptr;
	}


	bool SwitchOnVariantByName(const struct FString& VariantSetName, const struct FString& VariantName);
	bool SwitchOnVariantByIndex(int VariantSetIndex, int VariantIndex);
	void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);
	class ULevelVariantSets* GetLevelVariantSets(bool bLoad);
};


// Class VariantManagerContent.PropertyValue
// 0x00C8 (0x00F0 - 0x0028)
class UPropertyValue : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET
	struct FString                                     FullDisplayString;                                        // 0x0078(0x0010) (CPF_ZeroConstructor)
	bool                                               bHasRecordedData;                                         // 0x0088(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsObjectProperty;                                        // 0x0089(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x008A(0x0006) MISSED OFFSET
	TArray<unsigned char>                              ValueBytes;                                               // 0x0090(0x0010) (CPF_ZeroConstructor)
	EPropertyValueCategory                             PropCategory;                                             // 0x00A0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	TArray<class UProperty*>                           Properties;                                               // 0x00A8(0x0010) (CPF_ZeroConstructor)
	TArray<int>                                        PropertyIndices;                                          // 0x00B8(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData03[0x28];                                      // 0x00C8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VariantManagerContent.PropertyValue"));
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueMaterial
// 0x0000 (0x00F0 - 0x00F0)
class UPropertyValueMaterial : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VariantManagerContent.PropertyValueMaterial"));
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueTransform
// 0x0000 (0x00F0 - 0x00F0)
class UPropertyValueTransform : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VariantManagerContent.PropertyValueTransform"));
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueVisibility
// 0x0000 (0x00F0 - 0x00F0)
class UPropertyValueVisibility : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VariantManagerContent.PropertyValueVisibility"));
		return ptr;
	}

};


// Class VariantManagerContent.Variant
// 0x0028 (0x0050 - 0x0028)
class UVariant : public UObject
{
public:
	struct FText                                       DisplayText;                                              // 0x0028(0x0018)
	TArray<class UVariantObjectBinding*>               ObjectBindings;                                           // 0x0040(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VariantManagerContent.Variant"));
		return ptr;
	}


	void SwitchOn();
	void SetDisplayText(const struct FText& NewDisplayText);
	int GetNumActors();
	struct FText GetDisplayText();
	class AActor* GetActor(int ActorIndex);
};


// Class VariantManagerContent.VariantObjectBinding
// 0x0048 (0x0070 - 0x0028)
class UVariantObjectBinding : public UObject
{
public:
	struct FSoftObjectPath                             ObjectPtr;                                                // 0x0028(0x0018) (CPF_ZeroConstructor)
	TLazyObjectPtr<class UObject>                      LazyObjectPtr;                                            // 0x0040(0x001C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<class UPropertyValue*>                      CapturedProperties;                                       // 0x0060(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VariantManagerContent.VariantObjectBinding"));
		return ptr;
	}

};


// Class VariantManagerContent.VariantSet
// 0x0028 (0x0050 - 0x0028)
class UVariantSet : public UObject
{
public:
	struct FText                                       DisplayText;                                              // 0x0028(0x0018)
	TArray<class UVariant*>                            Variants;                                                 // 0x0040(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class VariantManagerContent.VariantSet"));
		return ptr;
	}


	void SetDisplayText(const struct FText& NewDisplayText);
	class UVariant* GetVariant(int VariantIndex);
	int GetNumVariants();
	struct FText GetDisplayText();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
