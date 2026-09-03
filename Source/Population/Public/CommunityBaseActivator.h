#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ECommunityEntryOperation.h"
#include "CommunityBaseActivator.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class POPULATION_API UCommunityBaseActivator : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommunityEntryOperation Mode;
    
public:
    UCommunityBaseActivator();

};

