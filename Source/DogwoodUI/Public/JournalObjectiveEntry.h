#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Objective.h"
#include "JournalObjectiveEntry.generated.h"

UCLASS(Blueprintable)
class DOGWOODUI_API UJournalObjectiveEntry : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjective Objective;
    
    UJournalObjectiveEntry();

};

