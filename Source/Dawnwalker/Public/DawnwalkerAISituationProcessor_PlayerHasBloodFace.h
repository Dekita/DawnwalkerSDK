#pragma once
#include "CoreMinimal.h"
#include "RebelAISituationProcessor_StubIsInSight.h"
#include "DawnwalkerAISituationProcessor_PlayerHasBloodFace.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UDawnwalkerAISituationProcessor_PlayerHasBloodFace : public URebelAISituationProcessor_StubIsInSight {
    GENERATED_BODY()
public:
    UDawnwalkerAISituationProcessor_PlayerHasBloodFace();

};

