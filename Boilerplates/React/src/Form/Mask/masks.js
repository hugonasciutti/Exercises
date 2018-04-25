const hourInSeconds = 3600
const minuteInSeconds = 60

function joinMask(mask) {
  return new RegExp(mask.map(regex => regex.source || regex).join(''))
}

function formatHoursToSeconds(value) {
  const result = (/^(\d{2}):(\d{2})$/g).exec(value)

  if (result) {
    let seconds = (parseFloat(result[1]) * hourInSeconds)
    seconds += (parseFloat(result[2]) * minuteInSeconds)

    return seconds
  }

  return value
}

function formatHoursToString(number) {
  const numbersStartsWithZero = 10

  let hours = Math.floor(number / hourInSeconds)
  let minutes = Math.floor((number - (hours * hourInSeconds)) / minuteInSeconds)

  if (hours < numbersStartsWithZero) {
    hours = `0${hours}`
  }

  if (minutes < numbersStartsWithZero) {
    minutes = `0${minutes}`
  }

  return `${hours}:${minutes}`
}

function formatSecondsToHours(number) {
  const zero = 0

  if (number === zero) {
    return '00:00'
  }

  if (number && !(/_/g).test(number)) {
    return formatHoursToString(number)
  }

  return number
}

function buildMask(mask, validationError) {
  return {
    mask,
    validationError: validationError || 'general.formatInvalid',
    validations: { matchRegexp: joinMask(mask) },
    formatter: value => formatHoursToSeconds(value),
    formatterOnReceive: value => formatSecondsToHours(value)
  }
}

export default {
  hour: buildMask([/[0-9]/, /[0-9]/, ':', /[0-5]/, /[0-9]/])
}
