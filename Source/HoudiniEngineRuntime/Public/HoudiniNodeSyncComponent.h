#pragma once
#include "CoreMinimal.h"
#include "HoudiniAssetComponent.h"
#include "HoudiniNodeSyncComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniNodeSyncComponent : public UHoudiniAssetComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FetchNodePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLiveSyncEnabled;
    
public:
    UHoudiniNodeSyncComponent(const FObjectInitializer& ObjectInitializer);

};

