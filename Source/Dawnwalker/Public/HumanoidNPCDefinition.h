#pragma once
#include "CoreMinimal.h"
#include "DogwoodNPCDefinition.h"
#include "HumanoidNPCDefinition.generated.h"

class UAppearanceBase;
class UDataTable;

UCLASS(Abstract, Blueprintable)
class DAWNWALKER_API UHumanoidNPCDefinition : public UDogwoodNPCDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizeAppearance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppearanceBase* Appearance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RandomizedAppearanceTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreRandomizedAppearanceVoiceTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreAppearanceMeshQualityLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOneLinerInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldHaveWeaponAtBelt;
    
    UHumanoidNPCDefinition();

};

