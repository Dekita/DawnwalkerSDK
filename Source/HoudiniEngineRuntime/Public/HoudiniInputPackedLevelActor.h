#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputActor.h"
#include "HoudiniInputPackedLevelActor.generated.h"

class UHoudiniInputBlueprint;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputPackedLevelActor : public UHoudiniInputActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHoudiniInputBlueprint* BlueprintInputObject;
    
public:
    UHoudiniInputPackedLevelActor();

};

