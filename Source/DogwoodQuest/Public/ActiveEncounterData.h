#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ActiveEncounterData.generated.h"

class AEncounterActor;
class UQuestSketch;

USTRUCT(BlueprintType)
struct DOGWOODQUEST_API FActiveEncounterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEncounterActor* ActiveEncounterActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestSketch> ActiveEncounterSketchClass;
    
    FActiveEncounterData();
};

