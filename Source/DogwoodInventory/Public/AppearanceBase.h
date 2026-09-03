#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "AppearanceMesh.h"
#include "AppearanceUnitHandle.h"
#include "EAppearanceSlot.h"
#include "EDismemberLimb.h"
#include "AppearanceBase.generated.h"

class UCharacterBodyPreset;
class UDataTable;
class UStaticMesh;

UCLASS(Blueprintable)
class DOGWOODINVENTORY_API UAppearanceBase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LocalizationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AppearanceGroupTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterBodyPreset* BodyPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppearanceUnitHandle Headgear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppearanceUnitHandle Torso;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppearanceUnitHandle Legs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppearanceUnitHandle Gauntlets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppearanceUnitHandle Feet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppearanceUnitHandle TorsoUndergarment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppearanceUnitHandle LegsUndergarment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDismemberLimb, TSoftObjectPtr<UStaticMesh>> DismembermentMeshes;
    
    UAppearanceBase();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesAppearanceTableContainMesh(UDataTable* Table, EAppearanceSlot Slot, const FAppearanceMesh& Mesh, FName& OutName);
    
};

