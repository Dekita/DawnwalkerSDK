#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EInvestigationPointWidgetState.h"
#include "InvestigationPointData.h"
#include "InvestigationPointWidget.generated.h"

class UInvestigationComponent;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODWORLD_API UInvestigationPointWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointDataIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetingPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInvestigationPointWidgetState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAlpha;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInvestigationComponent* ParentInvestigationComponent;
    
public:
    UInvestigationPointWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpotInspected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInvestigationPointData GetPointData();
    
};

