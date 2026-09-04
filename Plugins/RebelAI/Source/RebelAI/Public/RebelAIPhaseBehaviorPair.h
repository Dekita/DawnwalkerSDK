#pragma once
#include "CoreMinimal.h"
#include "RebelAIPhaseBehaviorPair.generated.h"

USTRUCT(BlueprintType)
struct FRebelAIPhaseBehaviorPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhaseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BehaviorName;
    
    REBELAI_API FRebelAIPhaseBehaviorPair();
};
FORCEINLINE uint32 GetTypeHash(const FRebelAIPhaseBehaviorPair) { return 0; }

