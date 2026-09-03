#pragma once
#include "CoreMinimal.h"
#include "Components/TextRenderComponent.h"
#include "EProxyDebugText.h"
#include "ProxyDebugTextComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POPULATION_API UProxyDebugTextComponent : public UTextRenderComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProxyDebugText Role;
    
public:
    UProxyDebugTextComponent(const FObjectInitializer& ObjectInitializer);

};

