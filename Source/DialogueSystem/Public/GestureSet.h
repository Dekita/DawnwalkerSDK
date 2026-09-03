#pragma once
#include "CoreMinimal.h"
#include "GestureSetEntry.h"
#include "GestureSet.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FGestureSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGestureSetEntry> EntrySet;
    
    FGestureSet();
};

