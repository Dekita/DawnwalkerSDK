#pragma once
#include "CoreMinimal.h"
#include "PawnState.h"
#include "ActorStateAppearance.generated.h"

class UAppearanceBase;

UCLASS(Blueprintable, EditInlineNew)
class DAWNWALKER_API UActorStateAppearance : public UPawnState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppearanceBase* Appearance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCleanGarmentSlotsBeforeApplying;
    
public:
    UActorStateAppearance();

};

