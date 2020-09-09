/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2013 Blender Foundation.
 * All rights reserved.
 */

/** \file
 * \ingroup depsgraph
 *
 * Evaluation engine entry-points for Depsgraph Engine.
 */

#pragma once

namespace blender {
namespace deg {

struct Depsgraph;

/**
 * Evaluate all nodes tagged for updating,
 * \warning This is usually done as part of main loop, but may also be
 * called from frame-change update.
 *
 * \note Time sources should be all valid!
 */
void deg_evaluate_on_refresh(Depsgraph *graph);

}  // namespace deg
}  // namespace blender
