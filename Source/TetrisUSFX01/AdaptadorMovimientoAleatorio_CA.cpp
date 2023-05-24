// Fill out your copyright notice in the Description page of Project Settings.


#include "AdaptadorMovimientoAleatorio_CA.h"

UAdaptadorMovimientoAleatorio_CA::UAdaptadorMovimientoAleatorio_CA():
	Super()
{
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	SetLimitesMovimiento(0.0f, 5.0f, 5.0f);


}

void UAdaptadorMovimientoAleatorio_CA::SetLimitesMovimiento(float _XMovimiento, float _YMovimiento, float _ZMovimiento)
{
    if (cantidad<=2)
	{

	AnchoMovimiento = _ZMovimiento;
	AltoMovimiento = _YMovimiento;
	ProfundidadMovimiento = _ZMovimiento;

	} else  {

		// La pieza no cumple con los requisitos, se establecen los valores predeterminados
		AnchoMovimiento = 0.0f;
		AltoMovimiento = 0.0f;
		ProfundidadMovimiento = 0.0f;
     }
}

//void UAdaptadorMovimientoAleatorio_CA::DetenerMovimiento()
//{
//
//	// Lógica para detener el movimiento de los bloques
//	for (auto& Block : ABlock)
//	{
//		if (Block != nullptr)
//		{
//			// Lógica para detener el movimiento del bloque
//			// Implementa aquí la lógica para detener el movimiento de cada bloque.
//		}
//	}
//}
//
