#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AppearanceMesh.h"
#include "EAppearanceSlot.h"
#include "AppearanceClothingUnitRow.generated.h"

class UAkSwitchValue;
class UItemClothingDataAsset;

USTRUCT(BlueprintType)
struct DOGWOODINVENTORY_API FAppearanceClothingUnitRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAppearanceSlot Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppearanceMesh Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemClothingDataAsset* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* AudioSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkSwitchValue*> AdditionalAudioSwitches;
    
    FAppearanceClothingUnitRow();
};

