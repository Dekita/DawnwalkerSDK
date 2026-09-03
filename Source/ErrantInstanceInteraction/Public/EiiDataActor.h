#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EiiInstancedComponentData.h"
#include "EiiDataActor.generated.h"

UCLASS(Blueprintable)
class ERRANTINSTANCEINTERACTION_API AEiiDataActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRegisteredComponentsChangedOrReplicated, meta=(AllowPrivateAccess=true))
    TArray<FEiiInstancedComponentData> RegisteredComponentsData;
    
    AEiiDataActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRegisteredComponentsChangedOrReplicated();
    
};

