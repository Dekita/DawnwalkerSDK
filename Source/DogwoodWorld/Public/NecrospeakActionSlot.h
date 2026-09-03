#pragma once
#include "CoreMinimal.h"
#include "ActionSlotComponent.h"
#include "NecrospeakActionSlot.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODWORLD_API UNecrospeakActionSlot : public UActionSlotComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> NecrospeakPlayerCastMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> NecrospeakStartMontage;
    
    UNecrospeakActionSlot(const FObjectInitializer& ObjectInitializer);

};

