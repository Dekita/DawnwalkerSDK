#pragma once
#include "CoreMinimal.h"
#include "RebelAINPCSoundEvent.h"
#include "RebelAINPCSoundEventsArray.generated.h"

USTRUCT(BlueprintType)
struct FRebelAINPCSoundEventsArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelAINPCSoundEvent> Events;
    
    REBELAI_API FRebelAINPCSoundEventsArray();
};

