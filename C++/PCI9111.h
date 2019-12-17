#ifndef PCI9111H
#define PCI9111H

#include "Include/dask.h"

class PCI9111
{
	I16 ID_Card;

	public :
		PCI9111();
		~PCI9111();

		int Initialisation();
		float Acquisition ();
		void Ecriture(float tension);
};

#endif
