// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from base_demo:srv/Addints.idl
// generated code does not contain a copyright notice
#include "base_demo/srv/detail/addints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
base_demo__srv__Addints_Request__init(base_demo__srv__Addints_Request * msg)
{
  if (!msg) {
    return false;
  }
  // num1
  // num2
  return true;
}

void
base_demo__srv__Addints_Request__fini(base_demo__srv__Addints_Request * msg)
{
  if (!msg) {
    return;
  }
  // num1
  // num2
}

bool
base_demo__srv__Addints_Request__are_equal(const base_demo__srv__Addints_Request * lhs, const base_demo__srv__Addints_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num1
  if (lhs->num1 != rhs->num1) {
    return false;
  }
  // num2
  if (lhs->num2 != rhs->num2) {
    return false;
  }
  return true;
}

bool
base_demo__srv__Addints_Request__copy(
  const base_demo__srv__Addints_Request * input,
  base_demo__srv__Addints_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // num1
  output->num1 = input->num1;
  // num2
  output->num2 = input->num2;
  return true;
}

base_demo__srv__Addints_Request *
base_demo__srv__Addints_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_demo__srv__Addints_Request * msg = (base_demo__srv__Addints_Request *)allocator.allocate(sizeof(base_demo__srv__Addints_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_demo__srv__Addints_Request));
  bool success = base_demo__srv__Addints_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_demo__srv__Addints_Request__destroy(base_demo__srv__Addints_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_demo__srv__Addints_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_demo__srv__Addints_Request__Sequence__init(base_demo__srv__Addints_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_demo__srv__Addints_Request * data = NULL;

  if (size) {
    data = (base_demo__srv__Addints_Request *)allocator.zero_allocate(size, sizeof(base_demo__srv__Addints_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_demo__srv__Addints_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_demo__srv__Addints_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_demo__srv__Addints_Request__Sequence__fini(base_demo__srv__Addints_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_demo__srv__Addints_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_demo__srv__Addints_Request__Sequence *
base_demo__srv__Addints_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_demo__srv__Addints_Request__Sequence * array = (base_demo__srv__Addints_Request__Sequence *)allocator.allocate(sizeof(base_demo__srv__Addints_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_demo__srv__Addints_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_demo__srv__Addints_Request__Sequence__destroy(base_demo__srv__Addints_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_demo__srv__Addints_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_demo__srv__Addints_Request__Sequence__are_equal(const base_demo__srv__Addints_Request__Sequence * lhs, const base_demo__srv__Addints_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_demo__srv__Addints_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_demo__srv__Addints_Request__Sequence__copy(
  const base_demo__srv__Addints_Request__Sequence * input,
  base_demo__srv__Addints_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_demo__srv__Addints_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_demo__srv__Addints_Request * data =
      (base_demo__srv__Addints_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_demo__srv__Addints_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_demo__srv__Addints_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_demo__srv__Addints_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
base_demo__srv__Addints_Response__init(base_demo__srv__Addints_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
base_demo__srv__Addints_Response__fini(base_demo__srv__Addints_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

bool
base_demo__srv__Addints_Response__are_equal(const base_demo__srv__Addints_Response * lhs, const base_demo__srv__Addints_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sum
  if (lhs->sum != rhs->sum) {
    return false;
  }
  return true;
}

bool
base_demo__srv__Addints_Response__copy(
  const base_demo__srv__Addints_Response * input,
  base_demo__srv__Addints_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sum
  output->sum = input->sum;
  return true;
}

base_demo__srv__Addints_Response *
base_demo__srv__Addints_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_demo__srv__Addints_Response * msg = (base_demo__srv__Addints_Response *)allocator.allocate(sizeof(base_demo__srv__Addints_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(base_demo__srv__Addints_Response));
  bool success = base_demo__srv__Addints_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
base_demo__srv__Addints_Response__destroy(base_demo__srv__Addints_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    base_demo__srv__Addints_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
base_demo__srv__Addints_Response__Sequence__init(base_demo__srv__Addints_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_demo__srv__Addints_Response * data = NULL;

  if (size) {
    data = (base_demo__srv__Addints_Response *)allocator.zero_allocate(size, sizeof(base_demo__srv__Addints_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = base_demo__srv__Addints_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        base_demo__srv__Addints_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
base_demo__srv__Addints_Response__Sequence__fini(base_demo__srv__Addints_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      base_demo__srv__Addints_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

base_demo__srv__Addints_Response__Sequence *
base_demo__srv__Addints_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  base_demo__srv__Addints_Response__Sequence * array = (base_demo__srv__Addints_Response__Sequence *)allocator.allocate(sizeof(base_demo__srv__Addints_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = base_demo__srv__Addints_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
base_demo__srv__Addints_Response__Sequence__destroy(base_demo__srv__Addints_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    base_demo__srv__Addints_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
base_demo__srv__Addints_Response__Sequence__are_equal(const base_demo__srv__Addints_Response__Sequence * lhs, const base_demo__srv__Addints_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!base_demo__srv__Addints_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
base_demo__srv__Addints_Response__Sequence__copy(
  const base_demo__srv__Addints_Response__Sequence * input,
  base_demo__srv__Addints_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(base_demo__srv__Addints_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    base_demo__srv__Addints_Response * data =
      (base_demo__srv__Addints_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!base_demo__srv__Addints_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          base_demo__srv__Addints_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!base_demo__srv__Addints_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
