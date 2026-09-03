#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CourtEntry.h"
#include "MultipleActivityCourtEntry.generated.h"

class UQuest;

UCLASS(Blueprintable)
class DOGWOODQUEST_API UMultipleActivityCourtEntry : public UCourtEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UQuest*> EntrySubTagsToQuests;
    
    UMultipleActivityCourtEntry();

};

