#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RebelAIPerceptionProfile.generated.h"

class UAISenseConfig;

UCLASS(Blueprintable)
class REBELAI_API URebelAIPerceptionProfile : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAISenseConfig*> SensesConfig;
    
    URebelAIPerceptionProfile();

};

