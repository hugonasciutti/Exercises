import Formsy from 'formsy-react'
import get from 'lodash/get'
import moment from 'commons-core/utils/moment'
import { isValidEmail, isValidPhone } from 'commons-core/helper/validation'
import { validateMask } from 'commons-core/helper/form'
import { isValidCpfDigits } from 'commons-core/helper/validation'
import { isValidDate } from './utils'

export function dateValidation(values, value) {
  return moment(value, moment.ISO_8601).isValid()
}

export function datePeriodValidation(values, value) {
  const startDate = get(value, 'startDate')
  const endDate = get(value, 'endDate')
  const isValid = isValidDate(startDate) && isValidDate(endDate)

  return isValid
}

Formsy.addValidationRule('mask:cpf', (fields, value) => isValidCpfDigits(value))
Formsy.addValidationRule('isEmail', (fields, value) => isValidEmail(value))
Formsy.addValidationRule('isPhone', (fields, value) => isValidPhone(value))
Formsy.addValidationRule('isDate', dateValidation)
Formsy.addValidationRule('isDatePeriod', datePeriodValidation)
Formsy.addValidationRule('mask', (fields, value, pattern) => validateMask(value, pattern))

export default Formsy
