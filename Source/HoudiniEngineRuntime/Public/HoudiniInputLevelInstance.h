#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputActor.h"
#include "HoudiniInputLevelInstance.generated.h"

class AActor;
class UHoudiniInputObject;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputLevelInstance : public UHoudiniInputActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<AActor>, UHoudiniInputObject*> TrackedActorObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumActorsAddedLastUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumActorsRemovedLastUpdate;
    
public:
    UHoudiniInputLevelInstance();

};

