#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerIKTarget.h"
#include "DawnwalkerIKTarget_Ledge.generated.h"

USTRUCT(BlueprintType)
struct FDawnwalkerIKTarget_Ledge : public FDawnwalkerIKTarget {
    GENERATED_BODY()
public:
    DAWNWALKER_API FDawnwalkerIKTarget_Ledge();
};

