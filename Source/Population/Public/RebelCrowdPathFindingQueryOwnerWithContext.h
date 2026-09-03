#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ERebelCrowdPathFindingRequestType.h"
#include "RebelCrowdPathFindingQueryOwnerWithContext.generated.h"

UCLASS(Blueprintable)
class POPULATION_API URebelCrowdPathFindingQueryOwnerWithContext : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> ContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelCrowdPathFindingRequestType RequestType;
    
    URebelCrowdPathFindingQueryOwnerWithContext();

};

