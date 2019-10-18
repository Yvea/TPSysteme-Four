#pragma hdrstop
#include <fmx.h>

#include "PCI9111.h"
#include "Include/Dask.h"

#pragma package(smart_init)

PCI9111::PCI9111()
{

}

PCI9111::~PCI9111()
{

}

int PCI9111::Initialisation()
{
	ID_Card = Register_Card(PCI_9111DG, 0);

	AI_9111_Config(ID_Card, TRIG_INT_PACER, P9111_TRGMOD_SOFT, 0);
	AO_9111_Config(ID_Card, P9111_AO_UNIPOLAR);

	if (ID_Card >= 0)
	{
		return 1;
	}
	else
	{
        return 0;
    }

}
float PCI9111::Acquisition()
{
  	F64 Tension_lu;
	AI_VReadChannel(ID_Card,1, AD_B_10_V, &Tension_lu);
    return Tension_lu;

}

void PCI9111::Ecriture(float tension)
{
    AO_VWriteChannel(ID_Card, 1, tension);
}
