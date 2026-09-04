#pragma once
#include "CoreMinimal.h"
#include "GestureSetEntry.h"
#include "GestureSet.generated.h"

USTRUCT(BlueprintType)
struct FGestureSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGestureSetEntry> EntrySet;
    
    DIALOGUESYSTEM_API FGestureSet();
};

