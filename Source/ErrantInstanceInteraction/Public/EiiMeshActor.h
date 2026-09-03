#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EiiMeshActor.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class ERRANTINSTANCEINTERACTION_API AEiiMeshActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnMeshAssetChangedOrReplicated, meta=(AllowPrivateAccess=true))
    UStaticMesh* MeshAsset;
    
    AEiiMeshActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMeshAsset(UStaticMesh* InMeshAsset);
    
    UFUNCTION(BlueprintCallable)
    void OnMeshAssetChangedOrReplicated();
    
};

