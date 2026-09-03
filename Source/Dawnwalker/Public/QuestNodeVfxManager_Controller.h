#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "QuestNodeVfxManager_Controller.generated.h"

class UNiagaraComponent;
class UNiagaraDataInterfaceStaticMesh;
class UNiagaraSystem;
class UStaticMesh;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeVfxManager_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* VfxTemplate;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UNiagaraComponent>> VfxInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ParameterMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraDataInterfaceStaticMesh* ParameterDataInterface;
    
public:
    UQuestNodeVfxManager_Controller();

private:
    UFUNCTION(BlueprintCallable)
    void OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent);
    
};

