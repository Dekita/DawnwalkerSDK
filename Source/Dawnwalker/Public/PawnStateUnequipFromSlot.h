#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlotType.h"
#include "PawnState.h"
#include "PawnStateUnequipFromSlot.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DAWNWALKER_API UPawnStateUnequipFromSlot : public UPawnState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipmentSlotType FromSlot;
    
    UPawnStateUnequipFromSlot();

};

