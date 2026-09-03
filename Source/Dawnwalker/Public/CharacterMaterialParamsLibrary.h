#pragma once
#include "CoreMinimal.h"
#include "ECharacterMaterialParamType.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CharacterMaterialParamsLibrary.generated.h"

class ACharacter;
class UCharacterMaterialParamsComponent;
class UObject;

UCLASS(Blueprintable)
class DAWNWALKER_API UCharacterMaterialParamsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCharacterMaterialParamsLibrary();

    UFUNCTION(BlueprintCallable)
    static void RequestCharacterMaterialParamValue(const UObject* InRequester, ACharacter* InCharacter, const ECharacterMaterialParamType InMaterialParam, const float InValue, const float InIncreaseDuration, const bool bIncreaseOnly);
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseCharacterMaterialParamValue(const UObject* InRequester, ACharacter* InCharacter, const ECharacterMaterialParamType InMaterialParam);
    
    UFUNCTION(BlueprintCallable)
    static void IncreaseCharacterMaterialParamValue(ACharacter* InCharacter, const ECharacterMaterialParamType InMaterialParam, const float InValue);
    
    UFUNCTION(BlueprintCallable)
    static void ForceClearCharacterMaterialParam(ACharacter* InCharacter, const ECharacterMaterialParamType InMaterialParam);
    
    UFUNCTION(BlueprintCallable)
    static UCharacterMaterialParamsComponent* FindOrAddMaterialParamsComponent(ACharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    static UCharacterMaterialParamsComponent* FindMaterialParamsComponent(const ACharacter* InCharacter);
    
};

