/*******************************************************************************
 * Copyright IBM Corp. and others 1991
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at https://www.eclipse.org/legal/epl-2.0/
 * or the Apache License, Version 2.0 which accompanies this distribution and
 * is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following
 * Secondary Licenses when the conditions for such availability set
 * forth in the Eclipse Public License, v. 2.0 are satisfied: GNU
 * General Public License, version 2 with the GNU Classpath
 * Exception [1] and GNU General Public License, version 2 with the
 * OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] https://openjdk.org/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0 OR GPL-2.0 WITH Classpath-exception-2.0 OR LicenseRef-GPL-2.0 WITH Assembly-exception
 *******************************************************************************/

#if !defined(HEAPREGIONDESCRIPTORSTANDARD_HPP)
#define HEAPREGIONDESCRIPTORSTANDARD_HPP

#include "omrcfg.h"

#include "EnvironmentStandard.hpp"
#include "HeapRegionDescriptor.hpp"

class MM_EnvironmentBase;
class MM_GCExtensionsBase;

class MM_HeapRegionDescriptorStandard : public MM_HeapRegionDescriptor {

public:
protected:
private:

public:
	MM_HeapRegionDescriptorStandard(MM_EnvironmentStandard *env, void *lowAddress, void *highAddress);
	
	bool initialize(MM_EnvironmentBase *envBase, MM_HeapRegionManager *regionManager);
	void tearDown(MM_EnvironmentBase *env);
	
	static bool initializer(MM_EnvironmentBase *env, MM_HeapRegionManager *regionManager, MM_HeapRegionDescriptor *descriptor, void *lowAddress, void *highAddress);
	static void destructor(MM_EnvironmentBase *env, MM_HeapRegionManager *regionManager, MM_HeapRegionDescriptor *descriptor);

protected:
private:
	
};

#endif /* HEAPREGIONDESCRIPTORSTANDARD_HPP */
