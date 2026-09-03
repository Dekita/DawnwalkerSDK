#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CourtEntry.h"
#include "EncounterCourtEntry.generated.h"

UCLASS(Blueprintable)
class DOGWOODQUEST_API UEncounterCourtEntry : public UCourtEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EncounterTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxCompletionCount;
    
    UEncounterCourtEntry();

};

