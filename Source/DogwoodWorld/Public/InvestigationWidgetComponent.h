#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "InvestigationWidgetComponent.generated.h"

class UInvestigationComponent;
class UInvestigationPointWidget;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODWORLD_API UInvestigationWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInvestigationComponent* ParentInvestigationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInvestigationPointWidget* SpawnedInvestigationWidget;
    
public:
    UInvestigationWidgetComponent(const FObjectInitializer& ObjectInitializer);

};

