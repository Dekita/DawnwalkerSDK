#pragma once
#include "CoreMinimal.h"
#include "TriggerMappinable.h"
#include "NPCArmorer.generated.h"

UCLASS(Blueprintable)
class DOGWOODMAP_API ANPCArmorer : public ATriggerMappinable {
    GENERATED_BODY()
public:
    ANPCArmorer(const FObjectInitializer& ObjectInitializer);

};

