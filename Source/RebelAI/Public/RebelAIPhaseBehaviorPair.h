#pragma once
#include "CoreMinimal.h"
#include "RebelAIPhaseBehaviorPair.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIPhaseBehaviorPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhaseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BehaviorName;
    
    FRebelAIPhaseBehaviorPair();
};
FORCEINLINE uint32 GetTypeHash(const FRebelAIPhaseBehaviorPair) { return 0; }

