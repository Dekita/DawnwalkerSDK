#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ActionPoint.h"
#include "DynamicActionPoint.generated.h"

class UActionSlotComponent;

UCLASS(Blueprintable)
class POPULATION_API ADynamicActionPoint : public AActionPoint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActionSlotComponent* ActionSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DynamicCommunityTags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TagIndex;
    
public:
    ADynamicActionPoint(const FObjectInitializer& ObjectInitializer);

};

