#pragma once
#include "CoreMinimal.h"
#include "ECharacterMaterialParamType.h"
#include "Components/ActorComponent.h"
#include "CharacterMaterialParamRuntimeData.h"
#include "CharacterMaterialRequestData.h"
#include "CharacterMaterialParamsComponent.generated.h"

class UCharacterMaterialParamsConfig;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API UCharacterMaterialParamsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterMaterialParamType, FCharacterMaterialParamRuntimeData> MaterialParams;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCharacterMaterialParamsConfig* Config;
    
public:
    UCharacterMaterialParamsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestParamValue(const UObject* InRequester, const ECharacterMaterialParamType MaterialParam, const FCharacterMaterialRequestData InRequestParams, const bool bIncreaseOnly);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseParamValue(const UObject* InRequester, const ECharacterMaterialParamType MaterialParam);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCinematicDialogueStarted();
    
public:
    UFUNCTION(BlueprintCallable)
    void IncreaseParamToValue(const ECharacterMaterialParamType MaterialParam, const float InValue);
    
    UFUNCTION(BlueprintCallable)
    void ForceClearParam(const ECharacterMaterialParamType MaterialParam);
    
};

