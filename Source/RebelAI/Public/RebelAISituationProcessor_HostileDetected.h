#pragma once
#include "CoreMinimal.h"
#include "RebelAISituationProcessor.h"
#include "RebelAISituationProcessor_HostileDetected.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELAI_API URebelAISituationProcessor_HostileDetected : public URebelAISituationProcessor {
    GENERATED_BODY()
public:
    URebelAISituationProcessor_HostileDetected();

};

