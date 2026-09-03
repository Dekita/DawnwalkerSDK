#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputObject.h"
#include "HoudiniInputBlueprint.generated.h"

class UHoudiniInputSceneComponent;
class UObject;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputBlueprint : public UHoudiniInputObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHoudiniInputSceneComponent*> BPComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftObjectPtr<UObject>> BPSceneComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastUpdateNumComponentsAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastUpdateNumComponentsRemoved;
    
public:
    UHoudiniInputBlueprint();

};

