#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RebelBlueprintMath.generated.h"

UCLASS(Blueprintable)
class REBELUTILS_API URebelBlueprintMath : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URebelBlueprintMath();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 Xor_ByteByte(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 Or_ByteByte(uint8 A, uint8 B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 Not_ByteByte(uint8 A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 And_ByteByte(uint8 A, uint8 B);
    
};

